//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UISystemNavigationAction;

@interface SBBreadcrumbActionContext : NSObject
{
    UISystemNavigationAction *_action;
    NSDictionary *_destinationContexts;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *destinationContexts; // @synthesize destinationContexts=_destinationContexts;
@property(retain, nonatomic) UISystemNavigationAction *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

