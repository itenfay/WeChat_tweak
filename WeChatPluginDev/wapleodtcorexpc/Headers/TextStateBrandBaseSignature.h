//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateBrandBaseSignature : NSObject
{
    NSString *_textStateSignature;
    NSString *_sourceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *textStateSignature; // @synthesize textStateSignature=_textStateSignature;
- (id)description;
- (_Bool)isValid;
- (id)businessInfo;

@end

