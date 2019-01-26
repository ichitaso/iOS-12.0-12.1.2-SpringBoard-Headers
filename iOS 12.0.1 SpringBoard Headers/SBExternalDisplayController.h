//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSceneLayoutSlaveTransactionProviding.h"

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableArray, NSString, SBExternalDisplayPresenter, SBMainDisplaySceneManager, SBMainWorkspace;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding>
{
    SBMainWorkspace *_mainWorkspace;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayIdentity *_identity;
    SBExternalDisplayPresenter *_presenter;
    FBSDisplayConfiguration *_currentConfiguration;
    _Bool _observingAppState;
    _Bool _hasConnectTransactionRun;
    _Bool _disconnected;
    _Bool _tornDown;
    NSMutableArray *_pendingWork;
}

@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_identity;
- (void).cxx_destruct;
- (void)_handleDisplayConnectIfPossible;
- (void)_appProcessStateDidChange:(id)arg1;
- (void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createUpdateTransactionWithLabel:(id)arg1;
- (void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;
- (_Bool)_shouldConnectDisplayNow:(id)arg1;
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;
- (id)_expectedForegroundApp;
- (id)slaveTransactionsForTransitionRequest:(id)arg1;
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithMainWorkspace:(id)arg1 mainDisplaySceneManager:(id)arg2 displayIdentity:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
