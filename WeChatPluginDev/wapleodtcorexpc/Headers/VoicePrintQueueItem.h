//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoicePrintQueueItem : NSObject
{
    unsigned int voiceId;
    unsigned int offset;
    unsigned int length;
    unsigned int endflag;
    unsigned int trycount;
}

@property(nonatomic) unsigned int trycount; // @synthesize trycount;
@property(nonatomic) unsigned int endflag; // @synthesize endflag;
@property(nonatomic) unsigned int length; // @synthesize length;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId;

@end

