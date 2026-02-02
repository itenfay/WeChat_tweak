//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADCardItem : NSObject
{
    NSString *cardTpId;
    NSString *cardExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

