//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface WCAdInteractionTextView : NSObject
{
    MMUILabel *_labelView;
}

@property(retain, nonatomic) MMUILabel *labelView; // @synthesize labelView=_labelView;
- (void)organizeSubContentViews;

@end

