/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MailDelivery.h>

@class SMTPConnection;

@interface SMTPDelivery : MailDelivery
{
    SMTPConnection *_connection;
}

- (int)deliverMessageData:(id)fp8 toRecipients:(id)fp12;	// IMP=0x30b8ba1d
- (Class)deliveryClass;	// IMP=0x30b8b9fd

@end

