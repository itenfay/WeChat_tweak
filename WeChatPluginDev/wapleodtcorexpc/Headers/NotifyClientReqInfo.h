//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NotifyClientReqInfo : NSObject
{
    int _funcMsgScene;
    NSString *_functionID;
    NSString *_clientAIInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientAIInfo; // @synthesize clientAIInfo=_clientAIInfo;
@property(retain, nonatomic) NSString *functionID; // @synthesize functionID=_functionID;
@property(nonatomic) int funcMsgScene; // @synthesize funcMsgScene=_funcMsgScene;

@end

