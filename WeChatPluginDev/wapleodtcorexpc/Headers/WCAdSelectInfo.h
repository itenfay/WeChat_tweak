//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdSelectInfo : NSObject
{
    NSString *leftBtnTitle;
    NSString *rightBtnTitle;
    WCAdCardBtnInfo *_leftBtnClickActionInfo;
    WCAdCardBtnInfo *_rightBtnClickActionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *rightBtnClickActionInfo; // @synthesize rightBtnClickActionInfo=_rightBtnClickActionInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *leftBtnClickActionInfo; // @synthesize leftBtnClickActionInfo=_leftBtnClickActionInfo;
@property(retain, nonatomic) NSString *rightBtnTitle; // @synthesize rightBtnTitle;
@property(retain, nonatomic) NSString *leftBtnTitle; // @synthesize leftBtnTitle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

