//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, StatusExtInfo, TextStateWeAppV6Stranger;

@interface TextStateExternModel : NSObject
{
    _Bool _isLiked;
    NSString *_textStateId;
    StatusExtInfo *_statusExtInfo;
    NSString *_username;
    TextStateWeAppV6Stranger *_v6Stranger;
    NSString *_distance;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) TextStateWeAppV6Stranger *v6Stranger; // @synthesize v6Stranger=_v6Stranger;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) StatusExtInfo *statusExtInfo; // @synthesize statusExtInfo=_statusExtInfo;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (id)generateTextState;

@end

