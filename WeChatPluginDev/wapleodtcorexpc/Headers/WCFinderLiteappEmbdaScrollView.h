//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMLiteAppView, NSString, OpenLiteAppInfo;

@interface WCFinderLiteappEmbdaScrollView : UIScrollView
{
    _Bool _alreadyStart;
    OpenLiteAppInfo *_liteAppInfo;
    MMLiteAppView *_liteAppView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyStart; // @synthesize alreadyStart=_alreadyStart;
@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
@property(retain, nonatomic) OpenLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)onLiteAppContentSizeChagned:(unsigned int)arg1 size:(struct CGSize)arg2;
- (void)tryStartLiteApp;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

