// Smooth scrolling for in-page links
(function(){
  const links = document.querySelectorAll('a[href^="#"]');
  links.forEach((link) => {
    link.addEventListener('click', (e) => {
      const targetId = link.getAttribute('href');
      if (!targetId || targetId === '#') return;
      const target = document.querySelector(targetId);
      if (target) {
        e.preventDefault();
        target.scrollIntoView({ behavior: 'smooth', block: 'start' });
      }
    });
  });
})();

// Active nav link on scroll
(function(){
  const sections = Array.from(document.querySelectorAll('section[id]'));
  const navLinks = Array.from(document.querySelectorAll('#topNav .nav-link'));
  const onScroll = () => {
    const scrollPos = window.scrollY + 100;
    let current = null;
    for (const section of sections) {
      if (section.offsetTop <= scrollPos) current = section;
    }
    navLinks.forEach((lnk) => lnk.classList.remove('active'));
    if (current) {
      const active = document.querySelector(`#topNav .nav-link[href="#${current.id}"]`);
      if (active) active.classList.add('active');
    }
  };
  document.addEventListener('scroll', onScroll, { passive: true });
  onScroll();
})();

// Contact form fake submit handler
(function(){
  const form = document.getElementById('contactForm');
  const alertBox = document.getElementById('contactAlert');
  if (!form || !alertBox) return;
  form.addEventListener('submit', (e) => {
    e.preventDefault();
    const data = new FormData(form);
    const name = data.get('name');
    alertBox.className = 'alert alert-success mt-3';
    alertBox.textContent = `Thanks, ${name}! Your message has been sent.`;
    form.reset();
    setTimeout(() => {
      alertBox.classList.add('d-none');
    }, 3500);
  });
})();
