//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface MJVoiceItem : NSObject
{
    _Bool _iconClipsToBounds;
    unsigned long long _status;
    unsigned long long _type;
    NSString *_roleID;
    NSString *_roleName;
    NSURL *_iconURL;
    UIImage *_icon;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool iconClipsToBounds; // @synthesize iconClipsToBounds=_iconClipsToBounds;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 roleName:(id)arg3 icon:(id)arg4 iconClipsToBounds:(_Bool)arg5 status:(unsigned long long)arg6;
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 roleName:(id)arg3 iconURL:(id)arg4 iconClipsToBounds:(_Bool)arg5 status:(unsigned long long)arg6;

@end

