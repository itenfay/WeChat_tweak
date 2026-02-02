//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCAdSliderCardReportInfo : NSObject
{
    unsigned int _slideJumpCount;
    unsigned int _touchCount;
    NSMutableArray *_reportItemList;
    unsigned long long _touchDuraion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int touchCount; // @synthesize touchCount=_touchCount;
@property(nonatomic) unsigned long long touchDuraion; // @synthesize touchDuraion=_touchDuraion;
@property(nonatomic) unsigned int slideJumpCount; // @synthesize slideJumpCount=_slideJumpCount;
@property(retain, nonatomic) NSMutableArray *reportItemList; // @synthesize reportItemList=_reportItemList;

@end

