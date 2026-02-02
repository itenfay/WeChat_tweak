//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HistoryMessage : NSObject
{
    float _click_score;
    NSString *_msg_id;
}

- (void).cxx_destruct;
@property(nonatomic) float click_score; // @synthesize click_score=_click_score;
@property(retain, nonatomic) NSString *msg_id; // @synthesize msg_id=_msg_id;

@end

