//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface KindaLayout
{
    long long flexDirection;
    long long justifyContent;
    long long flexWrap;
    long long alignItems;
    long long alignContent;
    NSMutableArray *_subviewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *subviewArray; // @synthesize subviewArray=_subviewArray;
- (void)setDisableHighlightDarkMode:(_Bool)arg1;
- (void)setFocusableInTouchMode:(_Bool)arg1;
- (void)removeAllViews;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1 position:(int)arg2;
- (void)addView:(id)arg1;
- (long long)getAlignContent;
- (void)setAlignContent:(long long)arg1;
- (long long)getAlignItems;
- (void)setAlignItems:(long long)arg1;
- (long long)getFlexWrap;
- (void)setFlexWrap:(long long)arg1;
- (long long)getJustifyContent;
- (void)setJustifyContent:(long long)arg1;
- (long long)getFlexDirection;
- (void)setFlexDirection:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

