------------------
---- MONITORS ----
------------------
hl.monitor({
    disabled = true,
    output   = "HDMI-A-1",
    mode     = "2560x1440@59.95",
    position = "auto",
    scale    = "1.07",
})

hl.monitor({
    disabled = false,
    output   = "eDP-1",
    mode     = "1920x1080@60.00",
    position = "auto",
    scale    = "1.25",
})

-- Workspaces 1-5 on main monitor
--hl.workspace_rule({ workspace = "1", monitor = "HDMI-A-1", persistent = true})
--hl.workspace_rule({ workspace = "2", monitor = "HDMI-A-1", persistent = true})
--hl.workspace_rule({ workspace = "3", monitor = "HDMI-A-1", persistent = true})
--hl.workspace_rule({ workspace = "4", monitor = "HDMI-A-1", persistent = true})
--hl.workspace_rule({ workspace = "5", monitor = "HDMI-A-1", persistent = true})
