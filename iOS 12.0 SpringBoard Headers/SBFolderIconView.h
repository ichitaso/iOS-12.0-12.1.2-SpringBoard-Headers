//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver>
{
    SBFolderSettings *_folderSettings;
    SBFolderIconView *_folderViewSpyingOnWallpaperOffsetUpdates;
}

+ (_Bool)canShowLabelAccessoryView;
+ (Class)_interactionlessIconViewClass;
@property(nonatomic) __weak SBFolderIconView *folderViewSpyingOnWallpaperOffsetUpdates; // @synthesize folderViewSpyingOnWallpaperOffsetUpdates=_folderViewSpyingOnWallpaperOffsetUpdates;
- (void).cxx_destruct;
- (id)_folderIconImageView;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setShouldRasterizeImageView:(_Bool)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)_updateAdaptiveColors;
- (void)_applyEditingStateAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)removeDropGlow;
- (void)showDropGlow:(_Bool)arg1;
- (void)prepareDropGlow;
- (void)iconDropDidComplete;
- (void)prepareForIconDrop;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setIconGridImageAlpha:(double)arg1;
- (_Bool)allowsTapWhileEditing;
@property(readonly, copy) NSString *description;
- (id)folder;
@property(readonly, nonatomic, getter=isAnimatingScrolling) _Bool animatingScrolling;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)lastVisibleMiniIconIndex;
- (unsigned long long)centerVisibleMiniIconIndex;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)visibleMiniIconListIndex;
- (unsigned long long)visibleMiniIconCount;
@property(nonatomic) unsigned long long backgroundStyle;
- (id)iconBackgroundView;
- (id)dropGlow;
- (void)setIcon:(id)arg1;
- (id)folderIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

