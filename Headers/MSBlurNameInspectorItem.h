//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorItem.h"

@class NSButton, NSMenuItem, NSPopUpButton;

@interface MSBlurNameInspectorItem : MSStylePartInspectorItem
{
    NSButton *_enabledButton;
    NSPopUpButton *_blurPopUp;
    NSMenuItem *_backgroundBlurMenuItem;
    NSMenuItem *_multipleBlursMenuItem;
}

@property(retain, nonatomic) NSMenuItem *multipleBlursMenuItem; // @synthesize multipleBlursMenuItem=_multipleBlursMenuItem;
@property(retain, nonatomic) NSMenuItem *backgroundBlurMenuItem; // @synthesize backgroundBlurMenuItem=_backgroundBlurMenuItem;
@property(retain, nonatomic) NSPopUpButton *blurPopUp; // @synthesize blurPopUp=_blurPopUp;
@property(retain, nonatomic) NSButton *enabledButton; // @synthesize enabledButton=_enabledButton;
- (void).cxx_destruct;
- (long long)popUpMenuIndexFromBlurType:(unsigned long long)arg1;
- (unsigned long long)blurTypeFromPopUpMenuIndex:(long long)arg1;
- (void)updateDisplayedValues;
- (void)blurEnabledAction:(id)arg1;
- (void)blurPopUpAction:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)viewDidLoad;

@end
