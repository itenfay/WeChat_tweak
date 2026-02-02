//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface BrandResortRecMsgReasonUpdateItem : NSObject
{
    CMessageWrap *_msgWrap;
    NSString *_recReason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;

@end

