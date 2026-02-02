//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderGroupLiveChatPageModel : NSObject
{
    NSString *_msgClientId;
    unsigned long long _seq;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *msgClientId; // @synthesize msgClientId=_msgClientId;

@end

