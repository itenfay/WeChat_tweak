//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class RTEAttachmentView;
@protocol WNAccessibilityElementDelegate;

@interface WNAccessibilityElement : UIAccessibilityElement
{
    id <WNAccessibilityElementDelegate> _delegate;
    unsigned long long _focusLocation;
    RTEAttachmentView *_attachmentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RTEAttachmentView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(nonatomic) unsigned long long focusLocation; // @synthesize focusLocation=_focusLocation;
@property(nonatomic) __weak id <WNAccessibilityElementDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)accessibilityElementDidBecomeFocused;

@end

