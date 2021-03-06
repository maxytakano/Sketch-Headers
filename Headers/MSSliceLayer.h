//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSSliceLayer.h"

#import "MSColorConvertible-Protocol.h"
#import "MSLayerWithMutableBackgroundColor-Protocol.h"

@class NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerWithMutableBackgroundColor, MSColorConvertible>
{
}

+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)sliceLayerFromLayer:(id)arg1;
- (void)convertColorsUsing:(id)arg1;
- (id)immutableBackgroundColor;
- (id)rootForNameUniquing;
- (BOOL)canRotate;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)isActive;
- (unsigned long long)filterType;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

