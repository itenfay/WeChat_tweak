//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CameraScanGoodsScanDotInfo : NSObject
{
    NSString *_dotID;
    struct CGPoint _normalizedCenter;
}

@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(retain, nonatomic) NSString *dotID; // @synthesize dotID=_dotID;

@end

