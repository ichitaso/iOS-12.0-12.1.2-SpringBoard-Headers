//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SBLayoutElementDescriptor <NSObject>
@property(readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, nonatomic) unsigned long long layoutElementMode;
@property(readonly, nonatomic) long long layoutRole;
@property(readonly, copy, nonatomic) NSString *identifier;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@end

