//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NCNotificationRequest, SBNotificationManagementContentProvider;

@protocol SBNotificationManagementSuggestionDelegate
- (void)notificationManagementContentProvider:(SBNotificationManagementContentProvider *)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationManagementContentProvider:(SBNotificationManagementContentProvider *)arg1 hasUpdatedContentForRequest:(NCNotificationRequest *)arg2;
@end
