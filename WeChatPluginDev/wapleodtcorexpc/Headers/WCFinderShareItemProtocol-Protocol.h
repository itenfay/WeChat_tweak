//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class CMessageWrap, NSString, WCContentItem, WCContentItemBaseView, WCDataItem;

@protocol WCFinderShareItemProtocol <NSCoding, NSCopying, PBCoding>
- (double)momentsHeightForMedia:(WCContentItem *)arg1;
- (NSString *)momentsDesc;
- (WCContentItemBaseView *)momentsViewWithWCDataItem:(WCDataItem *)arg1;
- (NSString *)momentsSourceText;
- (NSString *)summayText:(CMessageWrap *)arg1 sender:(NSString *)arg2 isChatRoom:(_Bool)arg3;
- (NSString *)chatDesc;
- (NSString *)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
@end

