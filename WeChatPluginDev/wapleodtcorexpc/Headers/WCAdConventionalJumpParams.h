//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIView, WCAdCardBtnInfo, WCAdQrCodeScanInfo, WCDataItem;

@interface WCAdConventionalJumpParams : NSObject
{
    WCAdQrCodeScanInfo *_adQrCodeScanInfo;
    WCAdCardBtnInfo *_actionInfo;
    WCDataItem *_dataItem;
    unsigned long long _scene;
    UIView *_originView;
    unsigned long long _clickIndex;
    NSArray *_originGridRectsInScreen;
    struct CGRect _originRectInScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *originGridRectsInScreen; // @synthesize originGridRectsInScreen=_originGridRectsInScreen;
@property(nonatomic) struct CGRect originRectInScreen; // @synthesize originRectInScreen=_originRectInScreen;
@property(nonatomic) unsigned long long clickIndex; // @synthesize clickIndex=_clickIndex;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdCardBtnInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) WCAdQrCodeScanInfo *adQrCodeScanInfo; // @synthesize adQrCodeScanInfo=_adQrCodeScanInfo;

@end

