//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BSDigestExposeInfo : NSObject
{
    unsigned int _exposeCnt;
    unsigned int _totalTime;
    unsigned int _minPos;
}

@property(nonatomic) unsigned int minPos; // @synthesize minPos=_minPos;
@property(nonatomic) unsigned int totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned int exposeCnt; // @synthesize exposeCnt=_exposeCnt;

@end

