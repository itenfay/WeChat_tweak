//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdPagInfo;

@interface WCAdFireworkCheerTopLikeAreaInfo : NSObject
{
    WCAdPagInfo *_topLikePag;
    NSString *_topLikeTitle;
    NSString *_topLikeBackgroundImage;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topLikeBackgroundImage; // @synthesize topLikeBackgroundImage=_topLikeBackgroundImage;
@property(retain, nonatomic) NSString *topLikeTitle; // @synthesize topLikeTitle=_topLikeTitle;
@property(retain, nonatomic) WCAdPagInfo *topLikePag; // @synthesize topLikePag=_topLikePag;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

