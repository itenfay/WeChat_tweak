//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderHistoryActionSheet : NSObject
{
    UILabel *_header;
}

@property(retain, nonatomic) UILabel *header; // @synthesize header=_header;
- (id)getCustomHeadView;
- (void)setupHeader:(id)arg1;

@end

