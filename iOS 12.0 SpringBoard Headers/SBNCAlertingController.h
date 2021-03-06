//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCAlertingController.h"

@class NCNotificationRequest, NSMutableSet, NSString, SBLockScreenManager, SBNCScreenController, SBNCSoundController, SBStarkScreenManager;

@interface SBNCAlertingController : NSObject <NCAlertingController>
{
    SBNCSoundController *_soundController;
    SBNCScreenController *_screenController;
    SBLockScreenManager *_lockScreenManager;
    SBStarkScreenManager *_starkScreenManager;
    NCNotificationRequest *_activeRequestWithRealerts;
    NSMutableSet *_realertTimers;
}

@property(retain, nonatomic) NSMutableSet *realertTimers; // @synthesize realertTimers=_realertTimers;
@property(retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts; // @synthesize activeRequestWithRealerts=_activeRequestWithRealerts;
@property(retain, nonatomic) SBStarkScreenManager *starkScreenManager; // @synthesize starkScreenManager=_starkScreenManager;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBNCScreenController *screenController; // @synthesize screenController=_screenController;
@property(retain, nonatomic) SBNCSoundController *soundController; // @synthesize soundController=_soundController;
- (void).cxx_destruct;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (void)_realertTimerFired:(id)arg1;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (_Bool)_shouldRealert;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (void)_notificationCenterDidPresent;
- (void)_lockStateChanged;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)killRealerts;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)alertOnPresentationForNotificationRequest:(id)arg1;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 starkScreenManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

