script_key="discord.gg/howlcc";
getgenv().Howl = {
    Options = {
        Type = "Target",
        UpdateNotification = true,
        Keybind = {
            Aimbot = "E",
            Resolver = "C",
            AutoBuyKeyBind = "Z",
            Macro = "X",
        },
    },
    Combat = {
        Aimbot = {
            Prediction = 0.187,
            Smoothness = 0.090,
            Part = "Head",
            PredictionAdjuster = false,
            MultipleParts = {
                Enabled = false,
                Parts = { "Head", "UpperTorso", "HumanoidRootPart", "LowerTorso" },
            },
            Shake = {
                Enabled = false,
                Amount = 5,
            },
            MouseTp = {
                Enabled = false,
                Smoothness = 0.04500,
                Prediction = 0.134151,
                Part = "Head",
            },
        },
        Silent = {
            Prediction = 0.13,
            Part = "HumanoidRootPart",
            PredictionAdjuster = false,
            MultipleParts = {
                Enabled = false,
                Parts = { "Head", "UpperTorso", "HumanoidRootPart", "LowerTorso" },
            },
            Offsets = {
                Jump = {Amount = 0.0015},
                Fall = {Amount = 0.0050},
            },
        },
    },
    PredictionAdjuster = {
        VelocityThreshold = 250,
    },
    Misc = {
        Checks = {
            KnockedChecks = true,
            TargetDeath = false,
            PlayerDeath = true,
            WallCheck = false,
            Resolver = {
                Enabled = false,
                Notification = true,
            },
        },
        Macro = {
            Enabled = true,
            Speed = 2,
            Type = "First", -- // "First", "Third", "Electron" (Dosen't use "Speed")
        },
        Autobuy = {
            ProximityDistance = 10,
        },
    Cframe = {
        Options = {
            DefaultSpeed = 100,
            Keybinds = {
                ToggleMovement = "J",
                Enabled = true,
        },
    },
    NoJumpCooldown = {
            Enabled = false,
            },
        },
    },
}
loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/1de36ecdbf39c1906b74e5e76385b82e.lua"))()
