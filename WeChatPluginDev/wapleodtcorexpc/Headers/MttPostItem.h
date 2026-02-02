//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol QBPostDataProtocol;

@interface MttPostItem : NSObject
{
    _Bool _hadReported;
    NSObject<QBPostDataProtocol> *_item;
    double _inTime;
    NSString *_mainURLString;
    long long _markCount;
}

@property(nonatomic) long long markCount; // @synthesize markCount=_markCount;
@property(nonatomic) _Bool hadReported; // @synthesize hadReported=_hadReported;
@property(retain, nonatomic) NSString *mainURLString; // @synthesize mainURLString=_mainURLString;
@property(nonatomic) double inTime; // @synthesize inTime=_inTime;
@property(retain, nonatomic) NSObject<QBPostDataProtocol> *item; // @synthesize item=_item;
- (void).cxx_destruct;

@end

