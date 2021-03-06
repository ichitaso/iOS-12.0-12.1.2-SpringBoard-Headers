//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewMorphAnimatorObserver.h"

@class NSString, PGPictureInPictureViewController, SBPIPMorphAnimatorDataSource, SBViewMorphAnimator;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>
{
    SBViewMorphAnimator *_viewMorphAnimator;
    SBPIPMorphAnimatorDataSource *_viewMorphAnimatorDataSource;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    long long _startedSourceAnimations;
    long long _completedTargetAnimations;
}

@property(nonatomic) long long completedTargetAnimations; // @synthesize completedTargetAnimations=_completedTargetAnimations;
@property(nonatomic) long long startedSourceAnimations; // @synthesize startedSourceAnimations=_startedSourceAnimations;
@property(nonatomic) __weak PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(readonly, nonatomic) SBPIPMorphAnimatorDataSource *viewMorphAnimatorDataSource; // @synthesize viewMorphAnimatorDataSource=_viewMorphAnimatorDataSource;
@property(readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator; // @synthesize viewMorphAnimator=_viewMorphAnimator;
- (void).cxx_destruct;
- (void)animatorWasInterrupted:(id)arg1;
- (void)animatorDidTimeout:(id)arg1;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)_terminate;
- (void)interrupt;
- (void)invalidate;
- (int)targetProcessIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithTargetProcessIdentifier:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

