//
// WCPLAppMessageHelpers.h
//
// AppMsg(type=49) 的 XML 判定与 innerType 解析收口。
// 目标：统一引用回复/合并转发/文件/表情等判定口径，减少 marker 复制与行为漂移。
//

#import <Foundation/Foundation.h>

@class CMessageWrap;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSInteger WCPLAppMessageInnerType(CMessageWrap * _Nullable msgWrap);
FOUNDATION_EXPORT BOOL WCPLIsQuoteReplyAppMessage(CMessageWrap * _Nullable msgWrap);
FOUNDATION_EXPORT BOOL WCPLIsMergedForwardAppMessage(CMessageWrap * _Nullable msgWrap);
FOUNDATION_EXPORT BOOL WCPLIsFileAppMessage(CMessageWrap * _Nullable msgWrap);
FOUNDATION_EXPORT BOOL WCPLIsAppEmoticonMessage(CMessageWrap * _Nullable msgWrap);

NS_ASSUME_NONNULL_END

