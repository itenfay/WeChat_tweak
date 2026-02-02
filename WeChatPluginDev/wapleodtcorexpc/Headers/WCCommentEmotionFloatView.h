//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class SnsEmojiInfoObj, WCDataItem, WCUserComment;

@interface WCCommentEmotionFloatView : UIButton
{
    WCDataItem *_dataItem;
    WCUserComment *_userComment;
    SnsEmojiInfoObj *_snsEmojiInfoObj;
}

+ (double)getHeight;
+ (double)getWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj=_snsEmojiInfoObj;
@property(retain, nonatomic) WCUserComment *userComment; // @synthesize userComment=_userComment;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)getSnsEmojiInfoObj;
- (id)initWithFrame:(struct CGRect)arg1 isAbove:(_Bool)arg2 arrowX:(double)arg3 emotion:(id)arg4;

@end

