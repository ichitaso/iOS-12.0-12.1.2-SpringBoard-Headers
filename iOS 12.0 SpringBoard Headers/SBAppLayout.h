//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding>
{
    long long _cachedAppLayoutType;
    long long _configuration;
    NSDictionary *_rolesToLayoutItemsMap;
}

+ (id)homeScreenAppLayout;
@property(copy, nonatomic) NSDictionary *rolesToLayoutItemsMap; // @synthesize rolesToLayoutItemsMap=_rolesToLayoutItemsMap;
@property(nonatomic) long long configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)appLayoutWithItemsPassingTest:(CDUnknownBlockType)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long type;
- (id)allItems;
- (long long)layoutRoleForItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (id)itemForLayoutRole:(long long)arg1;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2;
- (id)init;
- (unsigned long long)frameOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

