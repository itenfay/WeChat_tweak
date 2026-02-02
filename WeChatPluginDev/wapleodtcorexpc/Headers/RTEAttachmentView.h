//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RTETextAttachment;
@protocol RTEAttachmentViewDelegate;

@interface RTEAttachmentView : UIView
{
    _Bool _bNeedLayout;
    unsigned int _attachmentType;
    unsigned int _colorType;
    RTETextAttachment *_attachment;
    id <RTEAttachmentViewDelegate> _providerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int colorType; // @synthesize colorType=_colorType;
@property(nonatomic) __weak id <RTEAttachmentViewDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(nonatomic) _Bool bNeedLayout; // @synthesize bNeedLayout=_bNeedLayout;
@property(retain, nonatomic) RTETextAttachment *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) unsigned int attachmentType; // @synthesize attachmentType=_attachmentType;
- (void)didAddToSuperview;
- (void)onClickObject;
- (void)layoutView;
- (void)removeFromSuperview;
- (id)initWithAttachment:(id)arg1;

@end

