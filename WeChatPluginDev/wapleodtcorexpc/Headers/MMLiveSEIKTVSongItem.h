//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveSEIKTVSongItem : NSObject
{
    NSString *_uId;
    NSString *_sId;
    NSString *_sName;
    unsigned long long _os;
    NSString *_uiqId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uiqId; // @synthesize uiqId=_uiqId;
@property(nonatomic) unsigned long long os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *sName; // @synthesize sName=_sName;
@property(retain, nonatomic) NSString *sId; // @synthesize sId=_sId;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;

@end

