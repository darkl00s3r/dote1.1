-- See https://wiki.hypr.land/Configuring/Layouts/Dwindle-Layout/ for more
-- See https://wiki.hypr.land/Configuring/Layouts/Scrolling-Layout/ for more
hl.config({
    general = {
        layout = "scrolling"
    },
    scrolling = {
        fullscreen_on_one_column = true,
        focus_fit_method = 0,
        column_width = 0.92,
        wrap_swapcol = true,
        direction = "right",
    },
})


-- See https://wiki.hypr.land/Configuring/Layouts/Master-Layout/ for more
hl.config({
    master = {
        new_status = "master",
    },
})

