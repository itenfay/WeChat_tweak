//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage, UIView, WCTagItem;

@interface WCTagItemViewModel : NSObject
{
    WCTagItem *_tagItem;
    struct CGRect _tagViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect tagViewFrame; // @synthesize tagViewFrame=_tagViewFrame;
@property(retain, nonatomic) WCTagItem *tagItem; // @synthesize tagItem=_tagItem;
@property(readonly, nonatomic) UIView *tagView;
@property(readonly, nonatomic) UIImage *tagImage;
- (id)initWithTagItem:(id)arg1 tagViewFrame:(struct CGRect)arg2;

@end

