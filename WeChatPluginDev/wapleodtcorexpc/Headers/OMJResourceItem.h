//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJResourceItem : NSObject
{
    NSString *_templateID;
    NSString *_musicID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTemplateID:(id)arg1 musicID:(id)arg2;
- (id)initWithMusicID:(id)arg1;
- (id)initWithTemplateID:(id)arg1;

@end

