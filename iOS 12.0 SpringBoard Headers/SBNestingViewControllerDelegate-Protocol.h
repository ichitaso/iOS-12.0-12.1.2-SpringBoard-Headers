//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNestingViewControllerTransitionObserver.h"

@class SBNestingViewController;

@protocol SBNestingViewControllerDelegate <SBNestingViewControllerTransitionObserver>

@optional
- (id <UIViewControllerInteractiveTransitioning>)nestingViewController:(SBNestingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)nestingViewController:(SBNestingViewController *)arg1 animationControllerForOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 animated:(_Bool)arg4;
@end
