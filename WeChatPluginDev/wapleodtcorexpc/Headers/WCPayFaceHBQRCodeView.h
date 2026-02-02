//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface WCPayFaceHBQRCodeView : UIView
{
    UIImageView *_imageQRCodeView;
    UIImageView *_imageQRCodeEmptyView;
    NSString *m_nsQRCode;
}

- (void).cxx_destruct;
- (void)setQRCode:(id)arg1;
- (void)updateQRCode;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 qrWidth:(double)arg2;

@end

