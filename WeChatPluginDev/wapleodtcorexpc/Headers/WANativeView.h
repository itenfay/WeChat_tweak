//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface WANativeView : UIView
{
    unsigned int _viewId;
    unsigned int _webviewID;
    NSString *_data;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int webviewID; // @synthesize webviewID=_webviewID;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned int viewId; // @synthesize viewId=_viewId;
- (void)sendEventToJs:(id)arg1 param:(id)arg2;
- (id)onRemoveWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onInsertWithParam:(id)arg1;
- (void)handleCommonParam:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

