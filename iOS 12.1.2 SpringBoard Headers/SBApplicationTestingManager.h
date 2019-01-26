//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationTestingManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
    NSMutableDictionary *_idleTimerDisableAssertions;
    NSString *_currentTestName;
    NSString *_scrollTestActiveSubtest;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *scrollTestActiveSubtest; // @synthesize scrollTestActiveSubtest=_scrollTestActiveSubtest;
@property(copy, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions; // @synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions;
- (void).cxx_destruct;
- (void)_installTestEndedHandler:(CDUnknownBlockType)arg1;
- (void)_handleTestEnded;
- (void)_prepareForTestStartup:(id)arg1;
- (void)markUserLaunchInitiationTime;
- (id)init;

@end
