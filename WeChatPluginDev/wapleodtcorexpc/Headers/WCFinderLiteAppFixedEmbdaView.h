//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiteAppParam, MMLiteAppView, OpenLiteAppInfo;
@protocol WCFinderLiteAppFixedEmbdaViewDelegate;

@interface WCFinderLiteAppFixedEmbdaView : UIView
{
    _Bool _alreadyStartLiteApp;
    FinderLiteAppParam *_params;
    id <WCFinderLiteAppFixedEmbdaViewDelegate> _delegate;
    MMLiteAppView *_liteAppView;
    double _originWidth;
    OpenLiteAppInfo *_liteAppInfo;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
@property(nonatomic) _Bool alreadyStartLiteApp; // @synthesize alreadyStartLiteApp=_alreadyStartLiteApp;
@property(nonatomic) double originWidth; // @synthesize originWidth=_originWidth;
@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
@property(nonatomic) __weak id <WCFinderLiteAppFixedEmbdaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiteAppParam *params; // @synthesize params=_params;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)layoutSubviews;
- (void)onLiteAppContentSizeChagned:(unsigned int)arg1 size:(struct CGSize)arg2;
- (void)tryStartLiteApp;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

