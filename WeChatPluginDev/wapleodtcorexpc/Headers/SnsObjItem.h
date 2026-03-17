//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SnsObjItem : NSObject
{
    NSString *_tid;
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)dealloc;

@end

