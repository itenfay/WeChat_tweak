//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderCommentSelfActionSheet : NSObject
{
    NSString *_musicTitle;
    NSString *_musicSubTitle;
}

@property(copy, nonatomic) NSString *musicSubTitle; // @synthesize musicSubTitle=_musicSubTitle;
@property(copy, nonatomic) NSString *musicTitle; // @synthesize musicTitle=_musicTitle;
- (id)getCustomHeadView;

@end

