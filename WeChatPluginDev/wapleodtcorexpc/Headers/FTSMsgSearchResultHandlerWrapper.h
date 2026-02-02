//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSMsgSearchResultHandler;

@interface FTSMsgSearchResultHandlerWrapper : NSObject
{
    FTSMsgSearchResultHandler *_handler;
}

@property(nonatomic) __weak FTSMsgSearchResultHandler *handler; // @synthesize handler=_handler;

@end

