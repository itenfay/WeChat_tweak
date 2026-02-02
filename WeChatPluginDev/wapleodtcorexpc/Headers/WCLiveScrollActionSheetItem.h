//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCLiveScrollActionSheetItem : NSObject
{
    long long _reportElementId;
    NSString *_redDotPath;
}

@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(nonatomic) long long reportElementId; // @synthesize reportElementId=_reportElementId;
- (id)init;

@end

