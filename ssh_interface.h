//
//  ssh_interface.h
//  Secret Socks
//
//  Created by Joshua Chan on 10/07/09.
//  Enhanced by HK Chai Nov 2011
//

#import <Cocoa/Cocoa.h>
#import "TaskWrapper.h"


@interface ssh_interface : NSObject {
	NSString *localSocksPort;
	NSString *serverSshPort;
	NSString *serverHostname;
	NSString *serverSshUsername;
	NSString *serverSshPasswd;
	
	TaskWrapper *sshTask;
}

@property(readwrite, assign) NSString *localSocksPort;
@property(readwrite, assign) NSString *serverSshPort;
@property(readwrite, assign) NSString *serverHostname;
@property(readwrite, assign) NSString *serverSshUsername;
@property(readwrite, assign) NSString *serverSshPasswd;

- (void)connectToServer: (id) controller;
- (void)disconnectFromServer;
- (bool)hasTerminated;
- (void)dealloc;

@end
