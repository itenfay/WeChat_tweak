//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCOutFeedbackResItem : NSObject
{
    int _resID;
    NSString *_resContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *resContent; // @synthesize resContent=_resContent;
@property(nonatomic) int resID; // @synthesize resID=_resID;

@end

