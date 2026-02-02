//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMFinderLiveKTVSEISyncSendDelegate;

@interface KTVSEISyncSendHandlerWrapper : NSObject
{
    id <MMFinderLiveKTVSEISyncSendDelegate> _handler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveKTVSEISyncSendDelegate> handler; // @synthesize handler=_handler;

@end

